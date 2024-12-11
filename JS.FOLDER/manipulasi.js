var arr = ['sapi', 'babi', 'kuda', 'gajah'];

// join
//console.log(arr.join());


// push dan pop

//arr.push('ular');
//arr.pop();

// unshift dan shift
//arr.unshift('buaya');
//arr.shift();


// splice

//arr.splice(2,0,'buaya','gajah');

//var aja = arr.slice(2,3);
//console.log(aja.join(' - '));
//console.log(arr.join(' - '));

// forEach

/*var angka = [1,4,5,8,11,9,];
angka.forEach(function(a) {
    console.log(angka.join(' - '));

})*/

/*arr.forEach(function(e, i) {
    console.log('hewan ke- ' + (i+1) + ' adalah hewan: ' + e);
})*/

// map

/*var angka = [1,4,5,8,11,9,];
var angka2= angka.map(function(e) {
   return e + 2;
}) 
console.log(angka2.join(' - '));*/

// sort
/*var angka = [1,4,10,5,11,8,9];
angka.sort(function(a,b) {
        return a-b;
});
console.log(angka.join(' - '));*/

// filter

var angka = [1,4,10,5,11,8,9];
var angak5 = angka.find(function(x) {
    return x > 5;
})
console.log(angak5);





