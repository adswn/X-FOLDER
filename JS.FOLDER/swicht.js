var item = prompt('makanan direkomendasikan / makanan tidak direkomendasikan')

switch (item) {
    case'nasi':
    case'ayam':
    alert('makanan yang direkomendasikan');
    break;

    case'pizza':
    case'burger':
    alert('makanan yang tidak direkomendasikan');
    break;

    default:
        alert('makanan tidak ada di item');
}