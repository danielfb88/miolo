<?
    /**
     * Adm Module - Report Requisicao Alimentação Handler
     * Handler reprequisicaoalimentacao do módulo de Administração 
     * @package br.org.miolo.ufjf.adm
     */
    
    /**
     * Permissões necessárias
     *    Adm
     */

	if($perms->CheckAccess('adm',A_ACCESS,true))
    $theme->ClearContent();
    

    if( ($idreq = Form::GetFormValue('req')) )
	{	
		$dados = setDados($idreq);

		$report = new ezPDFReport('2');
		$pdf = $report->GetPdf(); 

		repHeader($pdf);

		$size = $pdf->getFontHeight(10);

		$yOriginal = $pdf->y;
        $pdf->x = 30;
        define('POSICAO_DADOS','100');

		$pdf->addTextWrap($pdf->x,($pdf->y-=$size),400,10,'<b>Número:</b>','left');
        $pdf->addTextWrap(($pdf->x+POSICAO_DADOS),$pdf->y,400,10,$dados->idRequisicao,'left');
		$pdf->addTextWrap($pdf->x,($pdf->y-=$size),400,10,'<b>Data:</b>','left');
        $pdf->addTextWrap(($pdf->x+POSICAO_DADOS),($pdf->y),400,10,$dados->dataRequisicao,'left');
		$pdf->addTextWrap(($pdf->x+250),($pdf->y),400,10,'<b>Hora:</b>','left');
        $pdf->addTextWrap((($pdf->x+POSICAO_DADOS)+200),($pdf->y),400,10,$dados->horaRequisicao,'left');
        $pdf->addTextWrap($pdf->x,($pdf->y-=$size),400,10,'<b>Requisitante:</b>','left');
        $pdf->addTextWrap(($pdf->x+POSICAO_DADOS),($pdf->y),400,10,$dados->nomeUsuarioReq,'left');
		$pdf->addTextWrap($pdf->x,($pdf->y-=$size),400,10,'<b>UO Requisitante:</b> ','left');
        $pdf->addTextWrap(($pdf->x+POSICAO_DADOS),($pdf->y),400,10,$dados->nomeReq,'left');
		$pdf->addTextWrap($pdf->x,($pdf->y-=$size),400,10,'<b>Executor:</b> ','left');
        $pdf->addTextWrap(($pdf->x+POSICAO_DADOS),($pdf->y),400,10,$dados->nomeExec,'left');
        
		if($dados->acompanhante){
			$conteudo = '<b>Requisitamos a V.Sa., por conta da REITORIA da UFJF e para pagamento à conta da Verba 349041 alimentação para </b>' . $dados->nome . '<b> e </b>' . $dados->acompanhante . '<b> que são hóspedes desta Universidade.</b>';
			$obs = 'OBS.: A UFJF <i>somente</i> se responsabilizará pelas refeições que os convidados acima referidos fizerem. Os <i>ACOMPANHANTES</i>, que porventura surgirem, pagarão suas próprias despesas.';
		}
		else{
			$conteudo = '<b>Requisitamos a V.Sa., por conta da REITORIA da UFJF e para pagamento à conta da Verba 349041 alimentação para </b>' . $dados->nome . '<b> que é hóspede desta Universidade.</b>';
			$obs = 'OBS.: A UFJF <i>somente</i> se responsabilizará pelas refeições que o convidado acima referido fizer. Os <i>ACOMPANHANTES</i>, que porventura surgirem, pagarão suas próprias despesas.';
		}
		
		$pdf->addTextWrap($pdf->x,($pdf->y-=$size*3),400,10,'<b>Sr. Gerente do </b>' . $dados->restaurante, 'left');

		$pdf->y-=$size;
        $pdf->ezText($conteudo, 10, array('justification' => 'full'));

		$pdf->addTextWrap(($pdf->x),($pdf->y-=$size*2),400,10,'<b>Período: de </b>' . $dados->datainicio . '<b> a </b>' . $dados->datafim,'left');

		if($dados->almocos==1){
			$pdf->addTextWrap(($pdf->x),($pdf->y-=$size),400,10,'<b>Almoço: </b>', 'left');
		}
		else{
			$pdf->addTextWrap(($pdf->x),($pdf->y-=$size),400,10,'<b>Almoços: </b>', 'left');
		}
		$pdf->addTextWrap(($pdf->x+50),($pdf->y),400,10,$dados->almocos, 'left');
		if($dados->jantares==1){
			$pdf->addTextWrap(($pdf->x),($pdf->y-=$size),400,10,'<b>Jantar: </b>', 'left');
		}
		else{
			$pdf->addTextWrap(($pdf->x),($pdf->y-=$size),400,10,'<b>Jantares: </b>', 'left');
		}
		$pdf->addTextWrap(($pdf->x+50),($pdf->y),400,10,$dados->jantares, 'left');

		$pdf->addText($pdf->x,($pdf->y-=$size*4),10,'Em ........ de ............................. de ............','left');
		$pdf->addText($pdf->x,($pdf->y-=$size*2),10,  '...................................................................','left');
		$pdf->addText($pdf->x,($pdf->y-=$size*7),10,'Recebi o conhecimento a que se refere a presente','left');
		$pdf->addText($pdf->x,($pdf->y-=$size*2),10,'.................................................................................','left');

		$pdf->y-=$size;
		$pdf->ezText($obs, 10, array('justification' => 'full'));
        
        
		$report->Execute();
	}

	function repHeader($pdf)
	{
		global $MIOLO;
		$ui = $MIOLO->GetUI();

		$h = $pdf->getFontHeight(12);
		$pdf->ezImage($ui->GetImageSrc('logonet.png'),5,50,'none','left');
	    $pdf->addText(90,800,12,'UFJF - Universidade Federal de Juiz de Fora');
		$pdf->addText(90,800-$h,12,'CGCO - Centro de Gestão do Conhecimento Organizacional');
		$pdf->addText(90,800-($h*2),12,'SIGA - Sistema Integrado de Gestão Acadêmica');
		$pdf->addText(90,800-$h-$h-$h,12,'Módulo Administrativo - Setor de Finanças');
		$pdf->addText(185,800-$h-$h-$h-$h-$h-$h,12,'REQUISIÇÃO DE ALIMENTAÇÃO');
	    $pdf->ezSetY(800-$h-$h-$h-$h-$h-$h-$h-$h);
	}

	function setDados($idreq)
	{
		global $MIOLO;

		$objRequisicao = $MIOLO->GetBusiness('adm','requisicao',$idreq);

		$dados = new FormData();

		$usuarioReq = $MIOLO->getBusiness('common','usuario');
        $usuarioReq->getById($objRequisicao->idUsuarioRequisitante);
		$objPessoa = $MIOLO->getBusiness('common','pessoa',$usuarioReq->idPessoa);
		$dados->nomeUsuarioReq = $objPessoa->nome;
		
		$dados->idRequisicao = $objRequisicao->idRequisicao;
		
		$objRequisicao->retrieveAssociation('uoRequisitante');
		$objRequisicao->retrieveAssociation('uoExecutante');
		
		list($dados->dataRequisicao,$dados->horaRequisicao) = explode(' ',$objRequisicao->dataHora);
		
		$dados->nomeReq = $objRequisicao->uoRequisitante->nome;
		$dados->nomeExec = $objRequisicao->uoExecutante->nome;

		
		$itemRestaurante = $objRequisicao->getItem();
		$itemRestaurante->retrieveAssociation('pessoa');
		$itemRestaurante->retrieveAssociation('restaurante');

		$objAcompanhante = $MIOLO->getBusiness('common','pessoa',$itemRestaurante->idPessoaAcompanhante);
		$dados->acompanhante = $objAcompanhante->nome;

		$dados->nome = $itemRestaurante->pessoa->nome;

        $dados->restaurante = $itemRestaurante->restaurante->nome;
		
		$dados->datainicio = $itemRestaurante->dataInicio;
		$dados->datafim = $itemRestaurante->dataFim;
		$dados->almocos = $itemRestaurante->numeroAlmocos;
		$dados->jantares = $itemRestaurante->numeroJantares;
		return $dados;
	}
?>
