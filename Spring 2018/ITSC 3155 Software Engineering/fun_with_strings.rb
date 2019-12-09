module FunWithStrings
  def palindrome?
    # your code here
    
    # Make the word lowercase
    low=self.downcase
    
    # Remove unnecessary characters
    low=low.gsub(/[\W]/, '')
    
    # Reverse the string
    back=low.reverse
    
    #Check if the string is equal to the reverse
    if low==back
      return true
    else 
      return false
    end
  end
  
  
  def count_words
    # your code here
    
    #Split up the string into words
    down=self.downcase.split
    
    #Initiate Hash
    words=Hash.new(0)
    
    #Iterate through each word
    down.each do |index|
      
      #Get rid of unnecessary punctuation
      w=index.gsub(/\W/, '')
      
      #Get rid of empty strings
      if w==""
        next
     
     #Set the has values
      else
        words[w]=words[w]+1
      end
    end
    
    #Return the hash.
      return words
  end
  
  
  def anagram_groups
    # your code here
    words=self.downcase.split
    sorted=words.group_by{|word| word.chars.sort}.values
    return sorted
  end
end
# make all the above functions available as instance methods on Strings:

class String
  include FunWithStrings
end
