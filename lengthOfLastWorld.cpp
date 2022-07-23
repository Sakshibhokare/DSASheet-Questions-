int count=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ')
                count++;
                      else if(count>0)
            return count;
        }
        return count;
