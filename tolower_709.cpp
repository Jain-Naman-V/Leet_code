//USING TOLOWER STL FUNCTION
class Solution {
public:
    string toLowerCase(string s) {
         for(int i=0;s[i]!='\0';i++)
	    {
		   s[i]=tolower(s[i]);      
	    }
	    return s;
    }
    
};
//__________________________________________________________________________________________________________

//Using concept of ascii
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;s[i]!='\0';i++)
	    {
		    if (s[i] >= 'A' && s[i] <= 'Z')   
			{ 
                s[i] = s[i] + 32; 
            }        
	    }
	    return s;
    }
};
//______________________________________________________________________________________________________________

//USING TRANSFORM AND TOLOWER FUNCTION
class Solution {
public:
    string toLowerCase(string s) {
       transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s ;
    }
};
