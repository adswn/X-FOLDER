var tanya = true;
while(tanya) {
var p = prompt('masukan angka 1-10');

var comp = Math.random();
    if(comp < 0.36) {       
        comp = '2';
    } else if (comp >= 0.36 && comp < 0.70){
        comp = '6';
    } else{
        comp = '10';
    }

   var hasil = '';
   if (p == comp) {
    hasil = 'SERI';
   }else if (p == '2') {
    hasil = (comp == '2') ? 'MENANG' : 'KALAH';
   }else if (p == '6'){
    hasil = (comp == '6') ? 'MENANG' : 'KALAH';
   }else if (p == '10') {
    hasil = (comp == '10') ? 'MENANG' : 'KALAH';
   } else {
     hasil = 'anda memasukan pertanyaan yang salah';
   }

   alert ('kamu memilih :' + p +' dan kompouter memilih ' + comp + ' \n dan hasilnya ' + hasil);
  
   tanya = confirm('apakah ingin bermain lagi?');

}

alert('MENANG ATAU KALAH ITU BIASA DALAM PERMAINAN \n DAN TERIMAKASIH SUDAH BERMAIN');