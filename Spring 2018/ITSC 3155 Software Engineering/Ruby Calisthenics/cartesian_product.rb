class CartesianProduct
  include Enumerable
  # YOUR CODE HERE
  attr_accessor :arr1
  attr_accessor :arr2
  attr_accessor :car_prod
  def initialize(arr1,arr2)
    @arr1=arr1
    @arr2=arr2
  end
  def each()
    if block_given?
            arr1.each do |i|
                arr2.each do |j|
                    element = [i,j]
                    yield element
                end
            end
        else
            return "Block missing!"
    end
  end
end

c = CartesianProduct.new([:a,:b], [4,5])
c.each { |elt| puts elt.inspect }

c = CartesianProduct.new([:a,:b], [])
c.each { |elt| puts elt.inspect }