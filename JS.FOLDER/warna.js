const warnaBerubah = document.getElementById('ubahwarna');
warnaBerubah.onclick = function() {
   //document.body.style.backgroundColor = 'lightgreen';
   //document.body.setAttribute('class', 'hijau-muda');
   document.body.classList.toggle('hijau-muda');
}

const randomWarna = document.createElement('button');
const textButton = document.createTextNode('Acak Warna');
randomWarna.appendChild(textButton);
randomWarna.setAttribute('type', 'button');
warnaBerubah.after(randomWarna);

randomWarna.addEventListener('click', function() {
   const r = Math.floor(Math.random() * 270 + 1);
   const g = Math.floor(Math.random() * 255 + 1);
   const b = Math.floor(Math.random() * 230 + 1);
   document.body.style.backgroundColor = 'rgb('+ r +','+ g +','+ b +')';
});


const Wmerah =document.querySelector('input[name=Wmerah]');
const Whijau =document.querySelector('input[name=Whijau]');
const Wbiru =document.querySelector('input[name=Wbiru]');


   Wmerah.addEventListener('input', function(){
      const r = Wmerah.value;
      const g = Whijau.value;
      const b = Wbiru.value;
      document.body.style.backgroundColor = 'rgb('+ r +','+ g +','+ b +')'

});

Whijau.addEventListener('input', function(){
   const r = Wmerah.value;
   const g = Whijau.value;
   const b = Wbiru.value;
   document.body.style.backgroundColor = 'rgb('+ r +','+ g +','+ b +')';

});

Wbiru.addEventListener('input', function(){
   const r = Wmerah.value;
   const g = Whijau.value;
   const b = Wbiru.value;
   document.body.style.backgroundColor = 'rgb('+ r +','+ g +','+ b +')';

});

document.body.addEventListener('mousemove', function(event){
 
   const xPos = Math.round((event.clientX / window.innerWidth) * 255);
   const yPos = Math.round((event.clientY / window.innerHeight) * 255);
   document.body.style.backgroundColor = 'rgb('+ xPos +','+ yPos +',100)';
});
