const container = document.querySelector('.container');
const judul = document.querySelector('.judul');
container.addEventListener('click', function(e){
    if(e.target.className == 'gambar')
        judul.src = e.target.src;
    judul.classList.add('fade');
    setTimeout(function(){
        judul.classList.remove('fade');
    }, 300)

    gambar.foeach(function(gambar){
        gambar.className = 'gambar';

        
    });

    e.target.classList.add('active');
});
   