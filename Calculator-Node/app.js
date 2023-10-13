const express = require('express');
const bodyParser = require('body-parser');
const app = express();

app.use(bodyParser.urlencoded({ extended: true }));

app.get('', (req, res) => {
    res.sendFile(__dirname + "/index.html");
});

app.post('/add', (req, res) => {
    const n1 = Number(req.body.num1);
    const n2 = Number(req.body.num2);
    const add = n1 + n2;
    res.send('The addition result is ' + add);
});

app.post('/sub', (req, res) => {
    const n3 = Number(req.body.num3);
    const n4 = Number(req.body.num4);
    const sub = n3 - n4;
    res.send('The subtraction result is ' + sub);
});

app.post('/mul', (req, res) => {
    const n5 = Number(req.body.num5);
    const n6 = Number(req.body.num6);
    const mul = n5 * n6;
    res.send('The multiplication result is ' + mul);
});
app.post('/div', (req, res) => {
    const n7 = Number(req.body.num7);
    const n8 = Number(req.body.num8);
    const div = n7 / n8;
    res.send('The Division result is ' + div);
});

app.listen(3000, () => {
    console.log("Server started at port 3000");
});
