# @param {Integer[]} nums
# @param {Integer} target
# @return {Integer[]}
def two_sum(nums, target)
  hash = {}

  nums.size.times do |i|
    find_for = target - nums[i]

    return [hash[find_for], i] if hash.key?(find_for)

    hash.merge!(nums[i] => i)
  end
end

n_nums = gets.to_i
nums = gets.chomp.split.map(&:to_i)
target = gets.to_i

puts two_sum(nums, target)
