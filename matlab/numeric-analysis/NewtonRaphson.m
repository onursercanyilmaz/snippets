function xnew = NewtonRaphson(f,d,x0,error,iteration)
   

    xx= -100:0.01:100;
    figure(1);
    plot(xx,f(xx));
    grid on

    while iteration ~=0
        
        xnew = x0 - (f(x0)/d(x0))
        xold = x0;
        err = abs((xnew-xold)/xnew)*100
        x0 = xnew;
       
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