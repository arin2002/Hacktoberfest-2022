function merging (partition_left, partition_right) {
  let final = [], left = 0, right = 0;
  while (right < partition_right.length && left < partition_left.length) {
    
    if(partition_left[left]>= partition_right[right])
    {
      final.push(partition_right[right]);
      right++; 
    }
    if (partition_left[left] < partition_right[right]) {
      final.push(partition_left[left]);
      left++; 
    } 
  }
  return final
          .concat(partition_left.slice(left))
          .concat(partition_right.slice(right));
}
function Sort (init) {
  var middle = Math.floor(init.length / 2);
  var partition_left = init.slice(0, middle);
  var partition_right = init.slice(middle);
  
  if (init.length <= 1) {
    return init;
  }
  
  return merging(Sort(partition_left), Sort(partition_right));
}
console.log(Sort([100,13445,133,2,411,345,1,2,0]));

