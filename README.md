# quiz_return_following_list
Given word = "word" , return following list(order does not matter): ["word","1ord","w1rd","wo1d","wor1","2rd","w2d","wo2","1o1d","1or1","w1r1","1o2","2r1","3d","w3","4"]

# Implementation notes:

1. I observe that the digit next to a number, it could be NULL or "word" char.
   The digit next to a "word" char, it would only be number or "word" char, can not be a NULL.
   So, I design flag and word_flag for this rule.
   
   a=rand()%random_number_size+1;
   
   This will skip the number "0" case, so that a NULL will be skipped.
   
2. Inorder to balance the probility of "word" char and number(1,2,3,4), I chose nine for the random number size.

3. Testing:

   If the first digit is "word" char, it is always "w".
   If the last digit is "word" char, it is always "d".
   No continue digits of number(1,2,3,4), such as w13, 1234....