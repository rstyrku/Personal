class Class
  def attr_accessor_with_history(attr_name)
    attr_name = attr_name.to_s # make sure it's a string
    attr_reader attr_name # create the attribute's getter
    attr_reader attr_name+"_history" # create bar_history getter
    attr_accessor attr_name
    attr_accessor attr_name+"_history"
    class_eval %Q{
      # YOUR CODE HERE
      def #{attr_name}=(value)
        temp=@attr_name
        if @#{attr_name}==nil
           @#{attr_name}_history ||= [nil]
           @#{attr_name}=value
        else
          @#{attr_name}_history <<@#{attr_name}
          @#{attr_name}= value
        end
      end}
  end
end

class Foo 
  attr_accessor_with_history :bar
end

f = Foo.new        # => #<Foo:0x127e678>
f.bar = 3          
f.bar = :wowzo     # => :wowzo
f.bar = 'boo!'     # => 'boo!'
f.bar_history      # => [nil, 3, :wowzo]