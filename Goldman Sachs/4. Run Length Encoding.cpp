string encode(string src)
{      
  string res = "";
  res += src[0];
  int cnt=1;
  
  for(int i=1; i<src.size(); i++) {
      if(src[i]==src[i-1]) cnt++;
      else {
          res += to_string(cnt);
          res += src[i];
          cnt = 1;
      }
  }
  res += to_string(cnt);
  
  return res;
} 
