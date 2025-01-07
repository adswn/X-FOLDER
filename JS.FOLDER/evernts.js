/*const p3 = document.querySelector('.p3');

function ubahWarnap3() {
    p3.style.backgroundColor = 'lightblue';
}

const p1 = document.querySelector('.p1');
p1.onclick = ubahWarnap1;

function ubahWarnap1() {
    p1.style.backgroundColor = 'lightblue';
}

const p4 = document.querySelector('section#b p');
p4.addEventListener('click', function() {
    const ul = document.querySelector('section#b ul');
    const liBaru = document.createElement('li');
    const teksLiBaru = document.createTextNode('item baru');
    liBaru.appendChild(teksLiBaru);
    ul.appendChild(liBaru);

});*/

const p3 = document.querySelector('.p3');
p3.addEventListener('click', function() {
    p3.style.backgroundColor = 'blue';
    p3.style.color = 'red';
});
   
