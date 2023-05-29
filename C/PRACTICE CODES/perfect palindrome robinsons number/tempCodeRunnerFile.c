while(tempNum > 0){
            if(arr[i]%tempNum == 0 && tempNum != arr[i]){
                total = total + tempNum;
            }
        }
        if (total == arr[i]){
            bkt2[index2] = total;
            index2++;
        }