var a = 2
var soma = 0

while(process.argv[a] != null){
    soma = soma + Number(process.argv[a])
    a = a+1
}

console.log(soma)