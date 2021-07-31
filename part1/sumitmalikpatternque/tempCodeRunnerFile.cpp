
    int n;
    cout<<"row-";
    cin<<n;
    int space = n/2;
    int star = 1;
    for(int i=1;i<=n;i++){
        for(int  j=1;j<=space;j++){
            cout<<" ";
            }
            for(int k =1;k<=star;k++){
                cout<<"*";
                }
            cout<<endl;
            if(i<=space){
             space=space-1;
             star = star+2;  