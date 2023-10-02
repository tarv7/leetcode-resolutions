# @param {Integer[]} height
# @return {Integer}
def trap(height)
  result = 0
  max_in_advance = []

  max_in_advance[height.size - 1] = height[-1]
  (1...(height.size)).reverse_each do |i|
    max_in_advance[i-1] = [height[i], max_in_advance[i]].max
  end

  (height.size - 1).times do |i|
    if height[i] > height[i+1] && max_in_advance[i] >= height[i+1]
      result += (height[i] - height[i+1])
      result -= (height[i] - max_in_advance[i]) if(max_in_advance[i] < height[i])

      height[i+1] = height[i]
    end
  end

  result
end

n = gets.to_i
height = gets.chomp.split.map(&:to_i)

puts trap(height)
