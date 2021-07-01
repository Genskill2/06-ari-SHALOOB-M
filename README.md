# Introduction

The [automated readability index](https://en.wikipedia.org/wiki/Automated_readability_index) is a
technique for calculating the approximate reading level of a block of
text. The formula is like so

             number of characters             number of words
      4.71 * --------------------  + 0.5 *  -------------------    - 21.43
               number of words              number of sentences  

The resultant score is rounded up to the next highest integer
(e.g. 10.1 and 10.8 both become 11)

After this, we use this scale

     | Score |   Age | Grade Level        |
     |-------+-------+--------------------|
     |     1 |   5-6 | Kindergarten       |
     |     2 |   6-7 | First/Second Grade |
     |     3 |   7-9 | Third Grade        |
     |     4 |  9-10 | Fourth Grade       |
     |     5 | 10-11 | Fifth Grade        |
     |     6 | 11-12 | Sixth Grade        |
     |     7 | 12-13 | Seventh Grade      |
     |     8 | 13-14 | Eighth Grade       |
     |     9 | 14-15 | Ninth Grade        |
     |    10 | 15-16 | Tenth Grade        |
     |    11 | 16-17 | Eleventh Grade     |
     |    12 | 17-18 | Twelfth grade      |
     |    13 | 18-24 | College student    |
     |    14 |   24+ | Professor          |

We use the following formulae to calculate words, sentences and
characters

1. number of characters is the number of letters and numbers
   (hint. You can use `isalnum` to check if something is a letter or a
   number). 
   
2. number of words is the number of spaces.

3. number of sentences is number of full stops(.), exclamation
   points(!) and question marks(?). (hint you can check for multiple
   conditions using `&&` for and or `||` for or. e.g. `s[i] == '.' ||
   s[i] == '?'` will be true if `s[i]` is either `'.'` *or* `'?'`. 
   
A piece of text like so (from the Harry Potter books) 

> Even aside from the rain and wind it hadn't been a happy practice
> session. Fred and George, who had been spying on the Slytherin team,
> had seen for themselves the speed of those new Nimbus Two Thousand
> and Ones. They reported that the Slytherin team was no more than
> seven greenish blurs, shooting through the air like missiles.

has 264 characters, 57 words and 3 sentences. 

The ARI score would be 10 which means that the text is suitable for
tenth grade students


The following excerpt from a scientific paper

> Pet ownership is an essential environmental exposure that might
> influence the health of the owner. This study’s primary objectives
> were to explore the effects of cat ownership on the gut microbial
> diversity and composition of owners. Raw data from the American Gut
> Project were obtained from the SRA database. A total of 214
> Caucasian individuals (111 female) with cats and 214 individuals
> (111 female) without cats were used in the following analysis. OTU
> number showed significant alteration in the Cat group and Female_cat
> group, compared with that of the no cat (NC) group and Female_ NC
> group, respectively. Compared with the NC group, the microbial
> phylum Proteobacteria was significantly decreased in the Cat group. 

has 591 letters, 113 words packed into 6 sentences and the ARI score would
be 13 which means that it's suitable only for college students


# Exercise

There is a file called `ari.c` where you need to implement a function
called `ari`. The prototype of the function is given in the `main.c`
program and it looks like this `string ari(string)`. It should take a
string `s` as input and return a string as per the table above
indicating the reading level for the piece of text. e.g. 


       ari("Even aside from the rain and wind it hadn't been a happy practice session. Fred and George, who had been spying on the Slytherin team, had seen for themselves the speed of those new Nimbus Two Thousand and Ones. They reported that the Slytherin team was no more than seven greenish blurs, shooting through the air like missiles.")


will return `Tenth grade`. 


# Instructions
1. You have to implement the `ari` function inside the `ari.c` file. 
2. Do not touch the `main.c` file or any other file. 
3. Pay attention to spelling and capitalisation


