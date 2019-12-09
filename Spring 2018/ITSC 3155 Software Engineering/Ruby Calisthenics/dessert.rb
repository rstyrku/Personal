class Dessert
  
  #Set Attributes
  attr_accessor :name
  attr_accessor :calories
  
  #Constructor
  def initialize(name, calories)
    # your code here
    @name=name
    @calories=calories
  end
  
  #Return if Healthy or Not
  def healthy?
    # your code here
    if calories<200
      return true
    end
  end
  
  #Return if Delicious
  def delicious?
    # your code here
    if @flavor=="licorice"
      return false
    else
      return true
    end
  end
end

class JellyBean < Dessert
  
  #Declare Attributes
  attr_accessor :flavor
  
  #Constructor
  def initialize(flavor)
    # your code here
    @flavor=flavor
    @calories=5
    @name="#{flavor} jelly bean"
  end
end
