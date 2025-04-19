import java.util.*;
import java.util.stream.Collectors;

class Solution {
    public int solution(int[] arrayA, int[] arrayB) {
        
        int gcdA = arrayA[0];
        int gcdB = arrayB[0];
        
        for(int i = 1 ; i < arrayA.length; i++){
            
            gcdA = gcd(arrayA[i], gcdA);
            gcdB = gcd(arrayB[i], gcdB);
            
        }
        
        int a = 0;
        int b = 0;
        
        
        if(!isDivide(arrayB,gcdA)){
            a = gcdA;
        }
        
        if(!isDivide(arrayA,gcdB)){
            b = gcdB;
        }
        
        return Math.max(a,b);
    }
    
    public boolean isDivide(int [] arr, int gcd){
        
        for(int i = 0 ; i < arr.length; i++){
            
            if(arr[i] % gcd == 0){
                return true;
            }
        
            
        }
        
        return false;
    }
    
    public int gcd(int a, int b){
        if(b==0) return a;
        else return gcd(b,a%b);
    }
    
    
}