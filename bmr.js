function CalculateBMR() {

    //Value alert
    if (document.BMR.Weight.value.length == 0) {
            alert('Enter your weight');
            return false;
        }
    
        if (document.BMR.Height.value.length == 0) {
            alert('Enter your height');
            return false;
        }
        if (document.BMR.Age.value.length == 0) {
            alert('Enter your age');
            return false;
        }
        
    //Metric
        if (document.BMR.mySelect.value == "Metric") {
            //Man
            if (document.getElementById("Man").selected)
            {
                document.BMR.BMRResult.value = 66.5 + (13.75 * (document.BMR.Weight.value)) + (5.003 * (document.BMR.Height.value)) - (6.755 * (document.BMR.Age.value));
                
                if (document.getElementById("light").selected) {
                    document.BMR.Result.value = 1.53 * (66.5 + (13.75 * (document.BMR.Weight.value)) + (5.003 * (document.BMR.Height.value)) - (6.755 * (document.BMR.Age.value)));
                }
                if (document.getElementById("moderately").selected) {
                    document.BMR.Result.value = 1.76 *(66.5 + (13.75 * (document.BMR.Weight.value)) + (5.003 * (document.BMR.Height.value)) - (6.755 * (document.BMR.Age.value)));
                }
                if (document.getElementById("vigorously").selected) {
                    document.BMR.Result.value = 2.25 * (66.5 + (13.75 * (document.BMR.Weight.value)) + (5.003 * (document.BMR.Height.value)) - (6.755 * (document.BMR.Age.value)));
                }
                
            }
            
            //Woman
            if (document.getElementById("Woman").selected) 
            {
                document.BMR.BMRResult.value = 655.1 + (9.563 * (document.BMR.Weight.value)) + (1.850 * (document.BMR.Height.value)) - (4.676 * (document.BMR.Age.value));
      
                if (document.getElementById("light").selected)
                {
                    document.BMR.Result.value = 1.53 * (655.1 + (9.563 * (document.BMR.Weight.value)) + (1.850 * (document.BMR.Height.value)) - (4.676 * (document.BMR.Age.value)));
                }
                if (document.getElementById("moderately").selected)
                {
                    document.BMR.Result.value = 1.76 * (655.1 + (9.563 * (document.BMR.Weight.value)) + (1.850 * (document.BMR.Height.value)) - (4.676 * (document.BMR.Age.value)));
                }
                if (document.getElementById("vigorously").selected)
                {
                    document.BMR.Result.value = 2.25 * (655.1 + (9.563 * (document.BMR.Weight.value)) + (1.850 * (document.BMR.Height.value)) - (4.676 * (document.BMR.Age.value)));
                }
                      
            }
        }
    
    //Imperial
        else {
            //Man
            if (document.getElementById("Man").selected)
            {
                document.BMR.BMRResult.value = 66 + (6.2 * (document.BMR.Weight.value)) + (12.7 * (document.BMR.Height.value)) - (6.76 * (document.BMR.Age.value));
    
                if (document.getElementById("light").selected)
                {
                    document.BMR.Result.value = 1.53 * (66 + (6.2 * (document.BMR.Weight.value)) + (12.7 * (document.BMR.Height.value)) - (6.76 * (document.BMR.Age.value)));
                }
                if (document.getElementById("moderately").selected) {
                    document.BMR.Result.value = 1.76 * (66 + (6.2 * (document.BMR.Weight.value)) + (12.7 * (document.BMR.Height.value)) - (6.76 * (document.BMR.Age.value)));
                }
                if (document.getElementById("vigorously").selected) {
                    document.BMR.Result.value = 2.25 * (66 + (6.2 * (document.BMR.Weight.value)) + (12.7 * (document.BMR.Height.value)) - (6.76 * (document.BMR.Age.value)));
                }  
                     
            }
            //Woman
            if (document.getElementById("Woman").selected)
            {
                document.BMR.BMRResult.value = 655.1 + (4.35 * (document.BMR.Weight.value)) + (4.7 * (document.BMR.Height.value)) - (4.7 * (document.BMR.Age.value));
    
                if (document.getElementById("light").selected) {
                    document.BMR.Result.value = 1.53 * (655.1 + (4.35 * (document.BMR.Weight.value)) + (4.7 * (document.BMR.Height.value)) - (4.7 * (document.BMR.Age.value)));
                }
                if (document.getElementById("moderately").selected) {
                    document.BMR.Result.value = 1.76 * (655.1 + (4.35 * (document.BMR.Weight.value)) + (4.7 * (document.BMR.Height.value)) - (4.7 * (document.BMR.Age.value)));
                }
                if (document.getElementById("vigorously").selected) {           
                    document.BMR.Result.value = 2.25 * (655.1 + (4.35 * (document.BMR.Weight.value)) + (4.7 * (document.BMR.Height.value)) - (4.7 * (document.BMR.Age.value)));
                }
                
            }
        }
    }