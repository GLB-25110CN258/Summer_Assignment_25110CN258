for(int k=0 ; k<size1 ; k++)
    {
        for(int m=0 ; m<size2 ; m++)
        {
            if(array1[k]==array2[m])
            {
                check=0;

                for(int p=0 ; p<count ; p++)
                {
                    if(array3[p]==array1[k])
                    {
                        check=1;
                        break;
                    }
                }
                if(check==0)
                {
                    array3[count]=array1[k];
                    count++;
                }
                break;
            }
        }
    }
    for(int n=0 ; n<count ; n++)
    {
        cout<<array3[n]<<"  ";
    }
    return 0;
}