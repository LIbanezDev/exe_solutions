       
        // Variables
        var n; // variable de cualquier tipo
        const k = 5; // variable inalterable
        

        // Condicionales
        n = 10;
        console.log("N es igual "); // Imprime mensajes por la consola de los navegadores web
        if(n == k || k+n == n){
            console.log("n es igual a k O k + n es igual a n");
        }else if(n == k && k != n){
            console.log("n es igual a k Y k es distinto de n");
        }

        var hora= 13;  
        switch(hora){
            case 10:
                console.log("Son las 10");
                break;                      // sentencia swtich, unicamente usada para ahorrar condicionales if en evaluar variables que tengan muchos casos
            case 15:
                console.log("Son las 15");
                break;
            default:    // si no se cumple cualquier otro caso
                console.log("No hay mensaje para esa hora");
                break;       
        }

        // Arreglos
        var h = [1,2,3,4,5, true, "Lucas"];
        console.log(h); //Imprime todo el arreglo en formato Array(tamaño) = [""]
        console.log(h[5]); // Imprime elemento del arreglo ubicado en el indice [n]
        
        const constante = [10,20,30];
        constante.push(23);   // agrega elemento al final del arreglo


        // Bucles
        for(let i = 0; i < 7; i++){ // imprimir arreglo elemento por elemento
            console.log(h[i]);
        }
        
        var i = 0;        
        
        while(i < 7){           
            console.log(h[i]);     // ejecutando la misma instruccion con 3 bucles distintos, siendo, en este caso, el bucle for el mas efectivo.
            i++;
        }
        
        i = 0;

        while(true){
            if(i == 6) break;
            console.log(h[i]);
            i++;
        }

        // Funciones
        function sumar(x, y){
            var suma = x + y;
            return suma;
        }
        
        console.log(sumar(3, 5));

 