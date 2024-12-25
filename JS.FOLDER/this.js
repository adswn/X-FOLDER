//THIS
var a = 60;

console.log(this.a);

// cara 1 = function deklarasi

/*function dia() {
    console.log("MENGAGUMI");
    console.log(this);
}
dia();*/ // this mengembalikan object global

// cara 2 = function literal

/*var obj = {nama : 'dia'};

    obj.kamu = function(){
        console.log(this)
        console.log("mengagumi")
    }

obj.kamu();*/ // this mengembalikan nilai pada object

// cara 3 = CONSTRUCTOR

function obj() {
    console.log(this);
    console.log("mengagumi");
}
new obj(); // this megembalikan nilai baru pada object


    
