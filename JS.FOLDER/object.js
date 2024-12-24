//LITERAL
/*var nilaiSMA = {};
    var Nama = "abdul";
    var kelas = 2;
   var nilai = [90, 88, 85, 80];

    alamat = {
        jalan : "jl.marah234",
        kota : "pendekar",
        provinsi: 'jatim'
    }*/

var mhs = {
    nama : "dafa",
    umur : 80,
    ips : [3.5, 4.00, 3.00]
};

//FUNCTION DEKLARASI

function buatObjectnamasiswa(nama, kelas, no, sekolah) {
    var namasiswa = {};
    namasiswa.nama = nama;
    namasiswa.kelas = kelas;
    namasiswa.no = no;
    namasiswa.sekolah = sekolah;

    return namasiswa;
} 

var iden = buatObjectnamasiswa("dody", "11", "11", "smansa")

//CONSTRUCTOR

function dataDiri(nama, umur, status, jender) {
    this.nama = nama;
    this.umur = umur;
    this.status = status;
    this.jender = jender;
}

var from = new dataDiri("roni", 17, "jomblo", "laki-laki")