<?

	//$theme->ClearContent();
	$ui = $MIOLO->GetUI();
	$form = $ui->GetForm($module,'frmListarLivrosALicitar',null,'licitacoes');
	$theme->InsertContent($form);

?>