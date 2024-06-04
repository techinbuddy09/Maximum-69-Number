class Solution {
public:
    int maximum69Number (int num) {
        string convert=to_string(num); // converting int to string type
      //for(char c :convert)
        for(int i=0;i<convert.size();i++)// a loop to iterate over
      {
         // if(c=='6')
            if(convert[i]=='6')//to check if 6 present then 
          {
             // c='9';
                convert[i]='9';//change it with 9 and break there only
            
           break;
            }
          
      }
        return stoi(convert);// convert string back to num
        //stoi func to convert string back to num
    }
};
