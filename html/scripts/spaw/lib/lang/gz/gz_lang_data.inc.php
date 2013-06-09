<?php 
// ================================================
// SPAW PHP WYSIWYG editor control
// ================================================
// Spanish language file
// ================================================
// Developed: Alan Mendelevich, alan@solmetra.lt
// Copyright: Solmetra (c)2003 All rights reserved.
// Galego translation: Pedro Telmo (p.telmo@valminor.info)
// ------------------------------------------------
//                                www.solmetra.com
// ================================================
// v.1.0, 2003-03-20
// ================================================

// charset to be used in dialogs
$spaw_lang_charset = 'UTF-8';

// language text data array
// first dimension - block, second - exact phrase
// alternative text for toolbar buttons and title for dropdowns - 'title'

$spaw_lang_data = array(
  'cut' => array(
    'title' => 'Cortar'
  ),
  'copy' => array(
    'title' => 'Copiar'
  ),
  'paste' => array(
    'title' => 'Pegar'
  ),
  'undo' => array(
    'title' => 'Desfacer'
  ),
  'redo' => array(
    'title' => 'Refacer'
  ),
  'hyperlink' => array(
    'title' => 'Ligazón'
  ),
  'image_insert' => array(
    'title' => 'Insertar imaxe',
    'select' => 'Seleccionar',
    'cancel' => 'Cancelar',
    'library' => 'Libreria',
    'preview' => 'Previsualizar',
    'images' => 'Imáxenes',
    'upload' => 'Subir imaxe',
    'upload_button' => 'Subir',
    'error' => 'Error',
    'error_no_image' => 'Por favor, selecciona unha imaxe',
    'error_uploading' => 'Ocurriu un erro ó subir a imaxe, inténteo de novo',
    'error_wrong_type' => 'Tipo de imaxe incorrecto.',
    'error_no_dir' => 'A libreria non existe', 
  ),
  'image_prop' => array(
    'title' => 'Propiedades da imaxe',
    'ok' => '   OK   ',
    'cancel' => 'Cancelar',
    'source' => 'Fonte',
    'alt' => 'Texto alternativo',
    'align' => 'Alineación',
    'left' => 'esquerda',
    'right' => 'dereita',
    'top' => 'superior',
    'middle' => 'medio',
    'bottom' => 'inferior',
    'absmiddle' => 'medio absoluto',
    'texttop' => 'Texto superior',
    'baseline' => 'Liña Base',
    'width' => 'Ancho',
    'height' => 'Alto',
    'border' => 'Borde',
    'hspace' => 'Marxe hor.',
    'vspace' => 'Marxe vert.',
    'error' => 'Erro',
    'error_width_nan' => 'a altura ten que ser un número',
    'error_height_nan' => 'o ancho ten que ser un número',
    'error_border_nan' => 'o borde ten que ser un número',
    'error_hspace_nan' => 'a marxe horizontal ten que ser un número',
    'error_vspace_nan' => 'a marxe vertical ten que ser un número',
  ),
  'hr' => array(
    'title' => 'Liña horizontal'
  ),
  'table_create' => array(
    'title' => 'Crear táboa'
  ),
  'table_prop' => array(
    'title' => 'Propiedades de la tabla',
    'ok' => '   OK   ',
    'cancel' => 'Cancelar',
    'rows' => 'Filas',
    'columns' => 'Columnas',
    'width' => 'Ancho',
    'height' => 'Alto',
    'border' => 'Borde',
    'pixels' => 'pixels', 
    'cellpadding' => 'Recheo da celda',
    'cellspacing' => 'Espaciado da celda',
    'bg_color' => 'Color de fondo',
    'error' => 'Erro',
    'error_rows_nan' => 'As filas teñen que ser un número',
    'error_columns_nan' => 'As columnas teñen que ser un número',
    'error_width_nan' => 'O ancho ten que ser un número',
    'error_height_nan' => 'O alto ten que ser un número',
    'error_border_nan' => 'O borde ten que ser un número',
    'error_cellpadding_nan' => 'O recheo ten que ser un número',
    'error_cellspacing_nan' => 'O espaciado ten que ser un número',
  ),
  'table_cell_prop' => array(
    'title' => 'Propiedades da celda',
    'horizontal_align' => 'Alineación horizontal',
    'vertical_align' => 'Alineación vertical',
    'width' => 'Ancho',
    'height' => 'Alto',
    'css_class' => 'Estilo CSS',
    'no_wrap' => 'non envolver',
    'bg_color' => 'Color de fondo',
    'ok' => '   OK   ',
    'cancel' => 'Cancelar',
    'left' => 'Esquerda',
    'center' => 'Centro',
    'right' => 'Dereita',
    'top' => 'Arriba',
    'middle' => 'Medio',
    'bottom' => 'Abaixo',
    'baseline' => 'Liña Base',
    'error' => 'Erro',
    'error_width_nan' => 'O ancho ten que ser un número',
    'error_height_nan' => 'O alto ten que ser un número',
    
  ),
  'table_row_insert' => array(
    'title' => 'Insertar fila'
  ),
  'table_column_insert' => array(
    'title' => 'Insertar columna'
  ),
  'table_row_delete' => array(
    'title' => 'Borrar fila'
  ),
  'table_column_delete' => array(
    'title' => 'Borrar columna'
  ),
  'table_cell_merge_right' => array(
    'title' => 'Combinar as celdas da esqueda'
  ),
  'table_cell_merge_down' => array(
    'title' => 'Combinar as celdas de abaixo'
  ),
  'table_cell_split_horizontal' => array(
    'title' => 'Dividir as celdas horizontalmente'
  ),
  'table_cell_split_vertical' => array(
    'title' => 'Dividir as celdas verticalmente'
  ),
  'style' => array(
    'title' => 'Estilo'
  ),
  'font' => array(
    'title' => 'Fonte'
  ),
  'fontsize' => array(
    'title' => 'Tamaño'
  ),
  'paragraph' => array(
    'title' => 'Párrafo'
  ),
  'bold' => array(
    'title' => 'Negriña'
  ),
  'italic' => array(
    'title' => 'Cursiva'
  ),
  'underline' => array(
    'title' => 'Subraiado'
  ),
  'ordered_list' => array(
    'title' => 'Lista ordeada'
  ),
  'bulleted_list' => array(
    'title' => 'Lista con marca'
  ),
  'indent' => array(
    'title' => 'Sangría'
  ),
  'unindent' => array(
    'title' => 'Anular sangría'
  ),
  'left' => array(
    'title' => 'Esquerda'
  ),
  'center' => array(
    'title' => 'Centro'
  ),
  'right' => array(
    'title' => 'Dereita'
  ),
  'fore_color' => array(
    'title' => 'Color da fonte'
  ),
  'bg_color' => array(
    'title' => 'Color de fondo'
  ),
  'design_tab' => array(
    'title' => 'Cambiar ó modo WYSIWYG (deseño)'
  ),
  'html_tab' => array(
    'title' => 'Cambiar ó modo HTML (código)'
  ),
  'colorpicker' => array(
    'title' => 'Selecciona color',
    'ok' => '   OK   ',
    'cancel' => 'Cancelar',
  )
);
?>

