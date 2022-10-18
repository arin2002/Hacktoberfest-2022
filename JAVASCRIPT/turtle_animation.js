
function line(x1, y1, x2, y2) {
  context.beginPath();
  context.moveTo(x1, y1);
  context.lineTo(x2, y2);
  context.stroke();
}
 
function drawAxles() {
  line(-length, 0, length, 0);  // x axis
  line(length * .9, length * .1, length, 0);
  line(length * .9, -length * .1, length, 0);
  line(0, -length, 0, length);  // y axis
  line(-length * .1, length * .9, 0, length);
  line(length * .1, length * .9, 0, length);
}
 
let length = 100;
let canvas = document.getElementById('myCanvas');
let context = canvas.getContext('2d');
 
context.strokeStyle = 'white';
drawAxles();
context.translate(length * 3, length);
context.strokeStyle = 'blue';
drawAxles();
context.rotate(Math.PI / 8);
context.strokeStyle = 'red';
drawAxles();
context.translate(3 * length, 0);
context.strokeStyle = 'green';
drawAxles();
 