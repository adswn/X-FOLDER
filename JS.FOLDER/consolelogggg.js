let text = "BEGINI"

let n = text.length()
for (let i = 0; i < n-1; i++) {
    if (S[i] > S[i+1]) return false
}
return true