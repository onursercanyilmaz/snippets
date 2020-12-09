function xnew = FalsePosition(f,xleft,xright,error,iteration)
   

    x1 = xright; 
    x0 = xleft;
    xnew = (x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
    
   
  
    xx= -100:0.01:100;
    figure(1);
    plot(xx,f(xx));
    grid on
     
    
    while iteration ~=0
        if(f(x1)*f(x0) > 0)
            x0 = xnew;
            xold = x0;
        else
            x1 = xnew;
            xold = x1;
        end
        
        xnew = (x0*f(x1)-x1*f(x0))/(f(x1)-f(x0))
        
        err = abs((xnew-xold)/xnew)*100
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