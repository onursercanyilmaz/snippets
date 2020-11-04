function x = NewtonRaphson(f,d,x0,error)
    x = x0; 
    y = f(x);
    xi=x;
   
  
    xx= -3:0.01:3;
    figure(1);
    plot(xx,f(xx));
    grid on

    while abs(y) > error
        
        x = x - y/d(x)
        y=f(x);
        err = abs((x-xi)/x)*100
        xi=x;
        
        figure(1);
        plot(xx,d(xx),x,d(x),'o');
        grid on;
        pause(0.5);
        
    end
     

end