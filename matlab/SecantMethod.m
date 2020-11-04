function x = SecantMethod(f,x0,x1,error)
    x = x1; 
    y = f(x);
    xi=x;
   
  
    xx= -3:0.01:3;
    figure(1);
    plot(xx,f(xx));
    grid on

    while abs(y) > error %Do do as long as absolute y is higher than wanted error
        
        x = x - ((f(x)*(x0-x))/(f(x0)-f(x)))
        y=f(x);
        err = abs((x-xi)/x)*100
        xi=x;
        
        figure(1);
        plot(xx,f(xx),x,f(x),'o');
        grid on;
        pause(0.5);
        
    end
     

end