class Solution {
public:
    int top,x;
    int evalRPN(vector<string>& tokens) {
        top = -1;
        int i,op1,op2,result;
        string symbol;

        for(i = 0; i < tokens.size();i++)
        {
            symbol = tokens[i];
            
            if(isoperator(symbol))
            {
                op1 = atoi(tokens[top].c_str());
                top--;
                op2 = atoi(tokens[top].c_str());
                top--;
                
                
                if(symbol == "+")
                    result = op2 + op1;
                else if(symbol == "-")
                    result = op2 - op1;
                else if(symbol == "*")
                    result = op2 * op1;
                else if(symbol == "/")
                    result = op2 / op1;
        
                top++;
                tokens[top] = to_string(result);
            }
            else if(isdigit(atoi(symbol.c_str()))==1)
            {
                top++;
                tokens[top] = symbol;//to convert
            }
        }//end for
        result = atoi(tokens[top].c_str());
        return result;
    }
    
    int isdigit(int c)
    {
        if(c >= 0 && c <= 9)
            return 1;
        else
            return 0;
    }
    int isoperator(string symbol)
    {
        if(symbol == "+")
            return 1;
        else if(symbol == "-")
            return 1;
        else if(symbol == "*")
            return 1;
        else if(symbol == "/")
            return 1;
        else 
            return 0;
    }
  
};
