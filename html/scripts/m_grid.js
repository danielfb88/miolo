Miolo.prototype.grid = {
	check : function (chkRow, checkboxId) {
       var tr = miolo.getElementById('row' + checkboxId);
       if (chkRow.checked) {
          if (tr.className=='row1')
             tr.className='row1checked';
          else if (tr.className=='row2')
             tr.className='row2checked';
          else if (tr.className=='row0')
             tr.className='row0checked';
       }
       else {
          if (tr.className=='row1checked')
             tr.className='row1';
          else if (tr.className=='row2checked')
             tr.className='row2';
          else if (tr.className=='row0checked')
             tr.className='row0';
       }
    },
	checkAll: function (chkAll, n, gridname) {
       for( var i=0; i < n; i++ ) {
          var chkRow = miolo.getElementById('select'+ gridname +'[' + i + ']');
          if (chkAll.checked != chkRow.checked) {
             chkRow.checked = chkAll.checked;
             miolo.grid.check(chkRow, gridname +'[' + i + ']');
          }
       } 
    },
	checkEachRow: function (n, gridname) {
       for ( var i=0; i < n; i++ ) {
          var chkRow = miolo.getElementById('select'+ gridname +'[' + i + ']');
          miolo.grid.check(chkRow, gridname +'[' + i + ']');
       } 
    },
	ajustSelect: function (className) {
	   var nodes = document.getElementsByTagName('span');
       for(i = 0; i < nodes.length; i++) {
           if ((nodes[i].parentNode.clientHeight) && (nodes[i].className == className)) {
    	      nodes[i].style.height = nodes[i].parentNode.clientHeight + 'px';
	       }
	   }
    },
	ajustTHead: function () {
       var h = 15;
	   var nodes = document.getElementsByTagName('th');
       for(var i = 0; i < nodes.length; i++) {
              h = nodes[i].clientHeight > h ? nodes[i].clientHeight : h;
	   }
       for(var i = 0; i < nodes.length; i++) {
    	   var children = nodes[i].getElementsByTagName('span');
           for(j = 0; j < children.length; j++) {
              children[j].style.height = h + 'px';
		   }
	   }
    }
}
