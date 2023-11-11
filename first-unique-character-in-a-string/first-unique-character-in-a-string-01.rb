# @param {String} s
# @return {Integer}
def first_uniq_char(s)
  hash = {}

  s.each_char do |c|
    hash[c] ||= 0
    hash[c] += 1
  end

  s.each_char.with_index { |c, i| return i if hash[s[i]] == 1 }

  -1
end

word = gets.chomp
puts first_uniq_char(word)
