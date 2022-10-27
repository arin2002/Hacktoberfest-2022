var Quick_Sort = input_array => {
  var arr = [...input_array];
  var pivot = Math.floor(input_array.length / 2);
  var val = arr[pivot];
  
  if (arr.length < 2) return arr;
  
  var [left, right] = arr.reduce(
    (recur_arr, current, i) => {
    
      if(val<current)
      {
        recur_arr[1].push(current);
      }
      if((val>current) || (i!=pivot) && val===current)
      {
         recur_arr[0].push(current);
      }
      return recur_arr;
    }
    ,
    [[],[]]
  );
  return [...Quick_Sort(left), val, ...Quick_Sort(right)];
};
console.log(Quick_Sort([1000,200,1243,22,11,24,1,2,5,999,0]));
