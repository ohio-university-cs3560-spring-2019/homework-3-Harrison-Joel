#HW 6 for cs3560 Joel Harrison
str = gets
str = str.gsub(/\bf/, "gh")
str = str.gsub(/\bF/, "Gh")
str = str.gsub(/sh\b/, "ti")
str = str.gsub(/Sh\b/, "Ti")
str = str.gsub(/sH\b/, "tI")
str = str.gsub(/SH\b/, "TI")
str = str.gsub(/\Bi\B/, "o")
str = str.gsub(/\BI\B/, "O")
puts str
