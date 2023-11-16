# @param {Integer[]} nums
# @param {Integer} k
# @return {Integer}
def find_kth_largest(nums, k)
  nums.sort!.reverse!

  nums[k-1]
end

n_nums = gets.to_i
nums = gets.chomp.split.map(&:to_i)
k = gets.to_i

puts find_kth_largest(nums, k)
