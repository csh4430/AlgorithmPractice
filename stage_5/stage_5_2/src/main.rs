fn main() {
    let mut arr = Vec::new();
    let mut a:i32 = 0;
    for x in 1..10000 {
        arr.push(x);
    }
    for x in 1..10001 {
        a = d(x as i32);
        if a >= 10000{
            continue;
        }
        arr.retain(|&x| x != a);
    }   
    for x in &arr {
        println!("{x}");
    }
}

fn d(n:i32) -> i32{
    let b =  n + ((n / 1000) % 10) + ((n / 100) % 10) + ((n / 10) % 10) + (n % 10);
    return b;
}
