function xnew = SecantMethod(f,xprev,xnext,error,iteration)
    
   x0 = xprev;
   x1 = xnext;
   xnew =  x1 - ((f(x1)*(x0-x1))/(f(x0)-f(x1)));
  
    xx= -100:0.01:100;
    figure(1);
    plot(xx,f(xx));
    grid on

   
    
    while iteration ~=0 
        
       xnew =  x1 - ((f(x1)*(x0-x1))/(f(x0)-f(x1)))
       xold = x1;
       err = abs((xnew-xold)/xnew)*100
       x0 = x1;
       x1 = xnew;

        iteration = iteration - 1;
        
        figure(1);
        plot(xx,f(xx),xnew,f(xnew),'o');
        grid on;
        pause(0.5);
        
        if error >= err
            break;
        end
        
    end
     

end