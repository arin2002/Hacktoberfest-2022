var buttons = document.querySelectorAll("button");
var PI= 3.14;
var log = Math.log10;
Array.from(buttons).forEach((btn)=>{
    btn.addEventListener("click",()=>{
        let txt = btn.innerHTML;
        if(txt=="="){
            try {
                output.innerHTML = eval(output.innerHTML);
            } catch (error) {
                output.innerHTML = "Syntax Error";
                alert('Andha h kya luvde😡😡? Sahi se type kar, samjha kya.\n ye dekh error \n'+error);
            }
            
        }else if(txt=="DEL"){
            output.innerHTML = output.innerHTML.slice(0,-1);
            if(output.innerHTML==""){
                output.innerHTML = '0';
            }
        }else if(txt=="AC"){
            output.innerHTML="0"
        }
        else{
            if(output.innerHTML=="0" && !isNaN(txt)){
                output.innerHTML = txt;
            }else{
                output.innerHTML += txt;
            }
        }
    })
    
})