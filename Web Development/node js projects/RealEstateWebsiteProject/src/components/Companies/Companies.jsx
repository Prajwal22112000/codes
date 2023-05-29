import React from 'react'
import "./Companies.css"
const Companies = () => {
  return (
    <section className='c-wrapper'>
        <div className='paddings innerWidth flexCenter c-container'>
          <a href='www.google.com'>
            <img src='./prologis.png' alt=''></img>
          </a>
          <a href='www.google.com'>
            <img src='./tower.png' alt=''></img>
          </a>
          <a href='www.google.com'>
            <img src='./equinix.png' alt=''></img>
          </a>
          <a href='www.google.com'>
            <img src='./realty.png' alt=''></img>
          </a>
        </div>
    </section>
  )
}

export default Companies;