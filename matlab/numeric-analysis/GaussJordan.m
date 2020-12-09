function matrix = GaussJordan (A,b)
%Create augmented matrix with A and b and print it.
if size(A) ~= size(b) %if size of A and size of b are different, show error message
    disp("Matrix dimensions must be same size!")
end
matrix = [A,b]


%Find size of augmneted matrix
[row,col] = size(matrix);

%Eğer diagonal yerler 0 ise bunu gerçekleştiremeyiz. Diagonal = 0 mı
%kontrol etmeliyiz!
for i = 1:row
    if(matrix(i,i)==0)
        disp("We can not apply Gauss Jordan Method!")
        break
    end
    disp("Diagonal 1 1 1 için bölündü ")
    matrix(i,:) = matrix(i,:)/matrix(i,i) %diagonali 1 1 1 yapmak için kendisine böleriz
    for j=i+1:row
        fprintf("%d. satır için işlem yapıldı",j)
        matrix(j,:) = matrix(j,:)-matrix(j,i)*matrix(i,:) %ikinci satır - ikinci satırın ilk elemanı*ilk satır
    end
end

disp("i en son satıra eşitlendi")
for i = row:-1:2 
    fprintf("i azaltıldı\n")
    for j = i-1:-1:1
        fprintf("%d. satıra gelindi, işlem yapıldı",j)
        matrix(j,:) = matrix(j,:) - matrix(j,i)* matrix(i,:)
    end
end

end
