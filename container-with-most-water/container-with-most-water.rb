# @param {Integer[]} height
# @return {Integer}
def max_area(height)
  result = 0
  i = 0
  j = height.size - 1

  while i < j do
    min_possible = [height[i], height[j]].min
    water_i_j = (j - i) * min_possible

    result = [result, water_i_j].max

    if height[i] < height[j]
      i += 1
    else
      j -= 1
    end
  end

  result
end

n = gets.to_i
height = gets.chomp.split.map(&:to_i)

puts max_area(height)
