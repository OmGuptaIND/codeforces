def dividingChocolate(n, chocolates):
    bool = false;
    one = []
    two = []
    for i in chocolates:
        if(i == 200){
            one.append(i)
        }
        else{
            two.append(i)
        }
    return false
    

def main():
    t = int(input().strip())

    for i in range(t):
        n = int(input().strip())
        chocolates = list(map(int, input().strip().split(' ')))
        dividable = dividingChocolate(n, chocolates)

        if dividable:
            print("Yes")
        else:
            print("No")


if __name__ == "__main__":
    main()