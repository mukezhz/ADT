const graph = {
    a: ['b', 'c', 'd'],
    b: [],
    c: ['e'],
    d: ['e'],
    e: []
  }
  
  
  const dfs = (graph, start) => {
    const stack = [start]
    while (stack.length > 0) {
      const current = stack.pop()
      console.log(current)
      for (const neighbour of graph[current]) {
        stack.push(neighbour)
      }
    }
  }
  
  dfs(graph, 'a')
  
  const dfsr = (graph, start) => {
    console.log(start)
    for (const n of graph[start]) {
      dfsr(graph, n)
    }
  }
  
  dfsr(graph, 'a')