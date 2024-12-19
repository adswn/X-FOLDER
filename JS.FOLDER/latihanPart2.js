var penumpang = ['raka', 'rido', 'setiawan']
var hapusPenumpang = function(namaPenumpang, penumpang) {
        if (penumpang.length == 0) {
          
            console.log('angkot kosong');

            return penumpang;
        } else {
            for (var i = 0; i < penumpang.length; i++) {
                if (penumpang [i] == undefined) {
                    
                penumpang [i] = namaPenumpang;

                return penumpang;
                } else if (i == penumpang.length - 1) {
                    console.log(namaPenumpang + ' tidak ada orang di angkot');
                }

                
            }
        }
}