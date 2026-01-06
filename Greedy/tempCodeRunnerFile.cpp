while(i < g.size() && j < s.size()){
        if(g[i]<=s[j]){
            i++;
            j++;
            count++;
        }
        else{
            j++;
        }
        
    }