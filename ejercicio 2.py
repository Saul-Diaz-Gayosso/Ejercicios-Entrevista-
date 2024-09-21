def my_function (cadena):
    
   bandera = 0
   
   for x in cadena:
        print(x)
        
        if x == " ":
            #pass
            bandera = bandera + 1
    
    
   if bandera > 0:
       return True
   else:
       return False
   
    
   

cadena = input("Por favor, ingrese una cadena de caracteres: ")
print(my_function(cadena))